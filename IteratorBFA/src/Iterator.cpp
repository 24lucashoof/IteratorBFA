#include "Iterator.h"

Iterator::Iterator(Graph graph)
{
	this->graph = graph;
}

Iterator::~Iterator()
{
}

void Iterator::Reset(char startVertex)
{
	for (int i = 0; i < this->graph.adjacencyList.size(); i++)
	{
		char vertexId = this->graph.adjacencyList[i].getVertexId();

		this->state[vertexId] = -1;
		this->d[vertexId] = -1;
		this->pi[vertexId] = '/';
	}

	this->state[startVertex] = 0;
	this->d[startVertex] = 0;
	this->pi[startVertex] = '/';
	this->queue.push(startVertex);
}

void Iterator::Next()
{
	if (this->IsEnd() == true)
	{
		std::cout << "isEmpty" << std::endl;
	}
	else
	{
		char currentVertexId = this->queue.front();
		queue.pop();

		AdjacencyList adjanced = this->graph.find(currentVertexId);
		for (int i = 0; i < adjanced.getAdjanced().size(); i++)
		{
			char adjancedVector = adjanced.getAdjanced()[i];
			bool unknown = this->state[adjancedVector] == -1;

			if (unknown)
			{
				this->state[adjancedVector] = 0;
				this->d[adjancedVector] = d[currentVertexId] + 1;
				this->pi[adjancedVector] = currentVertexId;
				this->queue.push(adjancedVector);
			}
		}
		this->state[currentVertexId] = 1;
	}
}

bool Iterator::IsEnd()
{
	if (this->queue.empty() == true)
		return true;
	else
		return false;
}

void Iterator::CurrentKey()
{
	std::cout << this->queue.front();
}

void Iterator::printCurrent()
{
	if (this->IsEnd() == true)
	{
		//empty ->nothing to print
	}
	else
	{
		for (int i = 0; i < this->graph.adjacencyList.size(); i++)
		{
			char vertex = this->graph.adjacencyList[i].getVertexId();

			std::cout << vertex << " state=" << this->state[vertex] << ": d=" << this->d[vertex] << " pi=" << this->pi[vertex] << std::endl;
		}
		std::cout << std::endl;
	}
}
