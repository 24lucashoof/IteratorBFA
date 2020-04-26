#include <iostream>

#include "Graph.h"
#include "Iterator.h"

int main()
{
	//feeding the graph data
	Graph graph;

	graph.addVertex('A');
	graph.addVertex('B');
	graph.addVertex('C');
	graph.addVertex('D');
	graph.addVertex('E');
	graph.addVertex('F');
	graph.addVertex('G');
	graph.addVertex('H');
	graph.addVertex('I');
	graph.addVertex('J');

	graph.addEdge('A', 'B');
	graph.addEdge('A', 'E');
	graph.addEdge('A', 'G');
	graph.addEdge('B', 'C');
	graph.addEdge('B', 'E');
	graph.addEdge('E', 'F');
	graph.addEdge('E', 'H');
	graph.addEdge('E', 'G');
	graph.addEdge('G', 'H');
	graph.addEdge('C', 'D');
	graph.addEdge('C', 'F');
	graph.addEdge('F', 'D');
	graph.addEdge('F', 'I');
	graph.addEdge('H', 'I');
	graph.addEdge('I', 'J');
	graph.addEdge('D', 'J');


	//some basic output example
	Iterator it(graph);
	it.Reset('A');
	for (int i = 0; i < 10; i++)
	{
		it.printCurrent();
		it.Next();
		std::cout << std::endl;
	}
	std::cout << "RESET, root B: " << std::endl << std::endl;
	it.Reset('B');
	std::cout << "CurrentKey(): ";
	it.CurrentKey();
	std::cout << std::endl;
	it.printCurrent();
	std::cout << std::endl;
	std::cout << "isEnd(): ";
	if (it.IsEnd())
		std::cout << "End" << std::endl;
	else
		std::cout << "notEnd" << std::endl;
	std::cout << std::endl << "Next(): " << std::endl;
	it.Next();
	it.CurrentKey();

	it.printCurrent();
}
