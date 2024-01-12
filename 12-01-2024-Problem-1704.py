class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a','e','o','i','u','A','E','I','O','U']
        a=0
        b=0
        n = len(s)
        for i in range(n):
            if s[i] in vowels:
                if i < n/2:
                    a+=1
                else:
                    b+=1
        if a==b:
            return True
        return False
