from IPCQueue import IPCQueue

# create ipc objects
a = IPCQueue("test")
b = IPCQueue("test")

a.write("a wrote a command")
print(b.read())
b.write("b wrote a command")
print(a.read())

print("main done\n\n")
