# Algorithm - TCP

## Client
1. Create a socket
2. Connect the socket to the server
3. Read the string to be reversed from the standard input and send it to the server
	Read the matrices from the standard input and send it to the server using the socket
4. Read the reversed string from the socket and display it on the standard output
	Read the product matrix from the socket and display it on the standard output
5. Close the socket
## Server
1. Create a listening socket
2. bind IP address and port number to the socket
3. listen for incoming requests on the listening socket
4. accept the incoming request
5. connection socket is created when accepting returns
6. Read the string using the connection socket from the client
7. Reverse the string
8. Send the string to the client using the connection socket
9. close the connection socket
10. close the listening socket

# Algorithm- UDP

## Client
1. Create a socket
2. Read the matrices from the standard input and send it to the server using the socket
3. Read the product matrix from the socket and display it on the standard output
4. Close the socket

## Server
1. Create a socket
2. bind IP address and port number to the socket
3. Read the matrices socket from the client using the socket
4. Find the product of matrices
5. Send the product matrix to the client using socket
6. close the socket


# Algorithm - Leaky Bucket

1. Input the bucket size, outgoing rate, and no of inputs
2. While n is not equal to 0,
3. Input the incoming packet size
4. Print the incoming packet size
5. If the incoming packet size is less than or equal to the bucket size - store,
6. Add the incoming packet size to the store
7. Print the bucket buffer size and the store
8. Subtract the outgoing rate from the store
9. If the store is less than 0,
10. Set the store to 0
11. Print the after outgoing packets left out of the bucket buffer size and the store
12. Subtract 1 from n
13. End while
14. End program


# Link-State Routing Algorithm:


This program implements Dijkstra's algorithm to find the shortest paths from a source node to all other nodes in a weighted graph. It generates routing tables for each node, showing the cost to reach each destination node and the next hop. The program reads the number of nodes in the graph, the cost matrix representing the edges between nodes, and the source node from the user. It then applies Dijkstra's algorithm to find the shortest paths and generates routing tables for each node.

## Algorithm
1. Initialize distance array `dist`, visited array `visited`, and last array `last`.
2. Initialize `dist[src]` to 0 and all other elements of `dist` to a large value (infinity).
3. Iterate `n - 1` times:
   a. Find the vertex `u` with the minimum distance value among the vertices not yet visited.
   b. Mark `u` as visited.
   c. Update the distance values of the vertices adjacent to `u`.
   d. Update the last array to store the next hop for each destination.
4. Generate routing tables for each node, showing the destination, cost, and next hop.



# Algorithm - STOP AND WAIT

1. Start the program
2. import all the necessary libraries
3. Create 2 Application client and server
4. Connect both Application using socket
5. Sender frame is sent to the receiver and displayed by the receiver
6. Receiver sends the acknowledgement to the sender if the frame is received else negative acknowledgement is sent
7. Sender waits for the acknowledgement from the receiver
8. If the acknowledgement is received then the sender sends the next frame
9. If the negative acknowledgement is received then the sender sends the same frame again
10. End program


# Algorithm - TCP Multi User Chat

## SERVER

1. Create a TCP socket.
2. Clear memory space for socket address.
3. Set up socket address structure with server details.
4. Bind socket to server address.
5. Start listening for incoming connections.
6. Accept client connections.
7. Convert client's network address to a readable format.
8. Spawn a child process to handle client while the parent process stops listening.
9. Receive data from client.
10. Send received data back to client.
11. Print client's IP address.
12. Close the socket.

## CLIENT

1. Create a TCP socket.
2. Clear memory space for socket address.
3. Set up socket address structure with server details.
4. Connect to server.
5. Continuously read input from user.
6. Send user input to server.
7. Receive response from server.
8. Print server's response.
9. Repeat steps 5-8 as needed.
