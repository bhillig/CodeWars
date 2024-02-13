# 19 - Byte Me (CodeWars Exercise)

# In this kata, you need to return the number of bytes (aka. memory size) a given object takes up.

import sys

# Return the total byte size of the object.
def total_bytes(object):
    return sys.getsizeof(object)
