import sys
import matplotlib.pyplot as plt



# Store command line arguments
reads_file = sys.argv[1]
writes_file = sys.argv[2]
sorting_method = sys.argv[3]

reads = []
writes = []

reads_file = open(reads_file, 'r')
writes_file = open(writes_file, 'r')


# Open the file
for line in reads_file:
    reads.append(int(line))
for line in writes_file:
    writes.append(int(line))



fig, ax = plt.subplots()
width = 0.35
x_pos = [i for i, _ in enumerate(reads)]
x_pos2 = [i + width for i, _ in enumerate(writes)]

ax.bar(x_pos, reads, width, label='Reads')
ax.bar(x_pos, writes, width, label='Writes')

ax.set_xticks([i + width / 2 for i, _ in enumerate(reads)])

ax.set_xticklabels(x_pos)

ax.legend()

plt.savefig(f'{sorting_method}Graph.png')
plt.show()


# Plot reads


