#!/usr/bin/python3

import angr
import claripy

proj = angr.Project(
	'crackme', 
	main_opts = {'base_addr': 0x0}, 
	load_options = {'auto_load_libs': False}
)

# Flag is 10 characters
flag = claripy.BVS("flag", 8 * 10)

state = proj.factory.entry_state(stdin = flag) 

# Silence the warnings
state.options.add(angr.options.ZERO_FILL_UNCONSTRAINED_MEMORY)

# Flags consists only on numbers ('0' -> '9')
for i in range(10):
    state.solver.add(flag.get_byte(i) >= 48)
    state.solver.add(flag.get_byte(i) <= 57)

sm = proj.factory.simulation_manager(state)

FIND_ADDR = 0x1219   # 'Congratualtions ...' message
AVOID_ADDR = 0x1227  # 'Try again ...' message

sm.explore(find = FIND_ADDR, avoid = AVOID_ADDR)

print("[*] Flag found: " + sm.found[0].posix.dumps(0).decode("utf-8"))
