"""
TCP client code
client wants to connect to server
"""

import socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

#connecting with thw server
s.connect(('127.0.0.1',12345))

#printing the message that the server sent
print(s.recv(2048))
s.close()

