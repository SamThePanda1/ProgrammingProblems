class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ""
        for i in strs:
            encoded_string+="*"+str(len(i))+"*"+i
        

        return encoded_string
    def decode(self, s: str) -> List[str]:
        i = 0
        number = ""
        decoded_string = []
        if len(s)== 0:
            return []
        while i < len(s):
            i+=1
            while s[i] != "*":
                number += str(s[i])
                i+=1
            i+=1
            char = i+int(number)
            decoded_string.append(s[i:char])
            i+=int(number)
            number =""
        return decoded_string