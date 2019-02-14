import math
class Solution:
    def reverse(self, x):

        if x<0:
            x=abs(x)
            a=-1
        else:
            a=1

        if a>2e31-1:
            return 0
        length = len(str(x))  # 3
        rx = 0
        while (x > 0):
            rt = x % 10
            if length > 0:
                length -= 1
            rx += math.pow(10, length) * rt
            x //= 10
        return a*int(rx)


