# 1108 Defanging an IP Address
class Solution:
    def defangIPaddr(self, address: str) -> str:
      """https://leetcode.com/problems/defanging-an-ip-address/discuss/340369/Python-One-Line"""
      return '[.]'.join(address.split('.'))
