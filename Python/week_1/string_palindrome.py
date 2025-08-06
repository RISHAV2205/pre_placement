import string
s = "A man, a plan, a canal: Panama"
normalized = ''.join(c.lower() for c in s if c.isalnum())
if normalized == normalized[::-1]:
    print("Palindrome")
else:
    print("Not a palindrome")
