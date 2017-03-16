from __future__ import print_function
from potentiostat import Potentiostat

port = '/dev/ttyACM0'
dev = Potentiostat(port)

test_names = dev.get_test_names()

for test in test_names:
    rsp_dict = dev.get_param(test)
    print('test =', test)
    print('rsp  =', rsp_dict)
    print()













