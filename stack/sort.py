def removeElement(nums, val):
    mid = int(len(nums)/2)
    if val>nums[mid]:
        start =0
    else:
        start = len(nums)-1
        
ar = [0,1,2,2,3,0,4,2]

print(removeElement(ar,2))

print(ar)


