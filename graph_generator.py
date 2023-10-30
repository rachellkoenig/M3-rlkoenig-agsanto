import sys
import matplotlib.pyplot as plt



# Store command line arguments
reads_file = sys.argv[1]
writes_file = sys.argv[2]

reads_Bubble = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
reads_Selection = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
reads_Insertion = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
reads_Merge = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
reads_QuickStable = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
reads_QuickUnStable = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
reads_Heap = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


size = [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]

reads_file = open(reads_file, 'r')
writes_file = open(writes_file, 'r')


# Open the file

plt.plot(size, reads_Bubble, label='BubbleSort reads')
plt.plot(size, reads_Selection, label='Slection reads')
plt.plot(size, reads_Insertion, label='Insetion reads')
plt.plot(size, reads_Merge, label='Merge reads')
plt.plot(size, reads_QuickStable, label='Quick stable reads')
plt.plot(size, reads_QuickUnStable, label='quick unstable reads')
plt.plot(size, reads_Heap, label='heap reads')

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


