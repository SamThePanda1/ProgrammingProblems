class Solution:
    def isPalindrome(self, s: str) -> bool:
        #first attempt without help
        s = s.replace(" ","")
        s =s.lower()
        
        #since i have not yet learned how to remove special characters
        #I'm creating a separate array
        newString = []

        for element in s:
            if element.isalnum():
                newString.append(element)
        for i in range(len(newString)//2):
            if(newString[i]!=newString[-i-1]):
                return False
        return True