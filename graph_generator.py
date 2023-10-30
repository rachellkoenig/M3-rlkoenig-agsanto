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

writes_Bubble = []
writes_Selection = []
writes_Insertion = []
writes_Merge = []
writes_QuickStable = []
writes_QuickUnStable = []
writes_Heap = []




size = [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]

reads_file = open(reads_file, 'r')
writes_file = open(writes_file, 'r')


# Open the file
# Plot Reads
plt.plot(size, reads_Bubble, label='BubbleSort reads')
plt.plot(size, reads_Selection, label='Slection reads')
plt.plot(size, reads_Insertion, label='Insetion reads')
plt.plot(size, reads_Merge, label='Merge reads')
plt.plot(size, reads_QuickStable, label='Quick stable reads')
plt.plot(size, reads_QuickUnStable, label='quick unstable reads')
plt.plot(size, reads_Heap, label='heap reads')

plt.xlabel('Reads / Data Set Size')
plt.ylabel('Reads per Algorithm')
plt.title('Reads / Data Set Size')

plt.legend(loc='best')
plt.savefig('..images/GraphOfReads.png')
plt.show()

# Plot writes
plt.plot(size, writes_Bubble, label='BubbleSort reads')
plt.plot(size, writes_Selection, label='Slection reads')
plt.plot(size, writes_Insertion, label='Insetion reads')
plt.plot(size, writes_Merge, label='Merge reads')
plt.plot(size, writes_QuickStable, label='Quick stable reads')
plt.plot(size, writes_QuickUnStable, label='quick unstable reads')
plt.plot(size, writes_Heap, label='heap reads')

plt.xlabel('Writes / Data Set Size')
plt.ylabel('Writes per Algorithm')
plt.title('Writes / Data Set Size')

plt.legend(loc='best')
plt.savefig('..images/GraphOfWrites.png')
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


