
from collections import defaultdict

class Graph:
	def __init__(self, vertices):
		self.graph = defaultdict(list) 
		self.V = vertices 

	def addEdge(self, u, v):
		self.graph[u].append(v)


	def topological_Sort(self, v, visited, stack):

		visited[v] = True

		for i in self.graph[v]:
			if visited[i] == False:
				self.topological_Sort(i, visited, stack)
		stack.append(v)

	def topologicalSort(self):
		
		visited = [False]*self.V
		stack = []

		for i in range(self.V):
			if visited[i] == False:
				self.topological_Sort(i, visited, stack)
		print(stack[::-1])
		
if __name__ == '__main__':
	g = Graph(6)
	g.addEdge(1, 2)
	g.addEdge(2, 3)
	g.addEdge(3, 4)
	g.addEdge(4, 5)
	
	print("Topological sort:")

	g.topologicalSort()


