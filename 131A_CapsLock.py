#	200819259	Apr/05/2023 08:25UTC+7	Minh4893IT	A - cAPS lOCK	PyPy 3	Accepted	124 ms	2000 KB

import re
s = input()
 
if re.match("^[a-z]?[A-Z]*$", s) is not None:
	print(s.swapcase())
else:
	print(s)