import sys
import matplotlib.pyplot as plt



# Store command line arguments
reads_file = sys.argv[1]
writes_file = sys.argv[2]

reads_Bubble = []
reads_Selection = []
reads_Insertion = []
reads_Merge = []
reads_QuickStable = []
reads_QuickUnStable = []
reads_Heap = []

writes = []
size = [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]

reads_file = open(reads_file, 'r')
writes_file = open(writes_file, 'r')


# Open the file

plt.plot(size, reads_Bubble, marker='b', label='BubbleSort reads')
plt.plot(size, reads_Selection, marker='s', label='Slection reads')
plt.plot(size, reads_Insertion, marker='i', label='Insetion reads')
plt.plot(size, reads_Merge, marker='m', label='Merge reads')
plt.plot(size, reads_QuickStable, marker='qs', label='Quick stable reads')
plt.plot(size, reads_QuickUnStable, marker='qu', label='quick unstable reads')
plt.plot(size, reads_Heap, marker='h', label='heap reads')

plt.xlabel('Writes / Data Set Size')
plt.ylabel('Reads per Algorithm')
plt.title('Reads / Data Set Size')

plt.legend(loc='best')
plt.savefig(f'GraphOfReads.png')
plt.show()
# fig, ax = plt.subplots()
# width = 0.35
# x_pos = [i for i, _ in enumerate(reads)]
# x_pos2 = [i + width for i, _ in enumerate(writes)]
#
# ax.bar(x_pos, reads, width, label='Reads')
# ax.bar(x_pos, writes, width, label='Writes')
#
# ax.set_xticks([i + width / 2 for i, _ in enumerate(reads)])
#
# ax.set_xticklabels(x_pos)
# ax.legend()


# Plot reads


