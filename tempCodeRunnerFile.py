def topological_sort_util(self, v, visited, stack):
        visited[v] = True

        for i in self.graph[v]:
            if not visited[i]:
                self.topological_sort_util(i, visited, stack)

        stack.append(v)

    def topological_sort(self):
        visited = {node: False for node in self.graph}
        stack = []

        for node in self.graph:
            if not visited[node]:
                self.topological_sort_util(node, visited, stack)

        return stack[::-1]

g = Graph()
g.add_edge(1, 2)
g.add_edge(2, 3)
g.add_edge(3, 4)
g.add_edge(4, 5)

print("Topological Sort Order:")