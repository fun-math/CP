import os
import glob
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("base")
args = parser.parse_args()

base=args.base

filenames=glob.glob('p*.cpp')

for f in filenames :
	cf=base+f
	os.system(f'mv {f} {cf}')