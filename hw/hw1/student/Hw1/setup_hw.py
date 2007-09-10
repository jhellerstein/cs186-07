#!/usr/bin/env python
#

import getopt
import os
import sys

def print_usage():
    print
    print "Usage: setup_hw.py [-m MASTER_DIRECTORY] [-i IGNORE_FILE] project_directory"
    print

def parse_cmdline(argv): 
    shortopts = "m:i:"
    flags = {"master" : r"/home/ff/cs186/hw1/Hw1/postgresql-8.0.3", "ignore" : None}
    opts, args = getopt.getopt(argv[1:], shortopts)
    for o, v in opts:
        if   o == "-m": flags["master"]  = v
        elif o == "-i": flags["ignore"] = v
        else:
            print_usage()
            exit(3)
    return flags, args

if __name__ == "__main__":
    try:
        flags, args = parse_cmdline(sys.argv)
    except:
        print "EXCEPTION"
        print_usage()
        sys.exit(3)
    if len(args) < 1:
        print_usage()        
        sys.exit(3)

    ignore = {}
    if flags["ignore"]:
	for line in open(flags["ignore"], 'r'):
		if line[-1:] == '\n': line = line[:-1]
		ignore[line] = line
	
    print "MASTER %s\n" % flags["master"]
    os.chdir(args[0])
    for root, dirs, files in os.walk("."):
	root = root[2:]
	path = os.path.join(flags["master"], root)
	for f in files: 
		if ignore.has_key(f):
			print "IGNORING: ", os.path.join(root, f)
			continue
		os.unlink(os.path.join(root, f))
		os.symlink(os.path.join(path, f), os.path.join(root, f))
