
# a=int(input("enter a number: "))
# sum=0
# while a>=0:
# 	sum+=a
# 	a=int(input("enter a number: "))
# print(sum)

# sum=0
# while True:
# 	num = int(input("enter a number: "))
# 	if num >=0:
# 		sum+=num
# 	else:
# 		print(sum)
# 		break

# int a
# ls = list(map(,
# input().split().strip()))

# len=int(input("emter the list size: "))
# ls=[]
# for i in range(len):
#     inp = input(" enter the List element: ")
#     ls.append(inp)
# int_count = 0
# str_count = 0
# float_count = 0
# for item in ls:
#     item = item.strip()  
#     if item.isdigit():  
#         int_count += 1
#     else:
#         try:
#             float(item)  
#             float_count += 1
#         except ValueError:
#             str_count += 1

# print("string count:",str_count)
# print("int count:",int_count)
# print("float count:",float_count)



# data = [[1, 2, 3], [4, 5], [6, 7, 8]]
# target = 5
# for i in range(len(data)):
#     for j in range(len(data[i])):
#         if data[i][j] ==target:
#             print("element found at index: ",i,j)
            

# for i in range(1,31):
#     if i%3 ==0 and i%5==0:
#         print("FIzzBuzz")
#     elif i%3==0:
#         print("Fizz")
#     elif i%5==0:
#         print("Buzz")
#     else:
#         print(i)

# for i in range(1,21):
#     if i%4==0:
#         continue
#     print(i)

# nums = [11, 23, 35, 42, 57, 60]
# for i in nums:
#     if i%2==0:
#         print(i)
#         break
