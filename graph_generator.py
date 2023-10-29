import cv2
import sys
import numpy as np

# Store command line arguments
reads_file = sys.argv[1]
writes_file = sys.argv[2]

# Open the file
reads = open(reads_file, "r")
writes = open(writes_file, "r")

