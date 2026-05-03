class Solution:
    def reverseBits(self, n: int) -> int:
        reversedN = 0
        for i in range(32):
            if (1 << i) & n:
                reversedN ^= (1 << (31 - i))
        return reversedN
