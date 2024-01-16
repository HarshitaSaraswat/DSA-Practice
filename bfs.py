visited = [] 
queue = []    

def bfs(visited, graph, node):
  visited.append(node)
  queue.append(node)

  while queue:        
    m = queue.pop(0) 
    print (m, end = " ") 

    for neighbour in graph[m]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)
        
        
graph = {
  'A' : ['C','E'],
  'C' : ['B', 'D'],
  'E' : ['F'],
  'B' : [],
  'D' : ['F'],
  'F' : []
}


print("The Breadth-First Search is : ")
bfs(visited,graph,'A')
