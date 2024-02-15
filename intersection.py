# Given two integer arrays nums1 and nums2, return an array of their intersection. 
# Each element in the result must be unique and you may return the result in any order.

def intersection(nums1: list[int], nums2: list[int]) -> list[int]:
    # nums1_hashmap = {}
    # for nums1_element in nums1:
    #     if nums1_element in nums1_hashmap:
    #         nums1_hashmap[nums1_element] += 1  # Increment frequency if item already exists
    #     else:
    #         nums1_hashmap[nums1_element] = 1
    
    # print(nums1_hashmap)
    
    # nums2_hashmap = {}
    # for nums2_element in nums2:
    #     if nums2_element in nums2_hashmap:
    #         nums2_hashmap[nums2_element] += 1  # Increment frequency if item already exists
    #     else:
    #         nums2_hashmap[nums2_element] = 1
    # print(nums2_hashmap)
    
    nums1_set = set(nums1)
    nums2_set = set(nums2)
    
    common_elements = nums1_set.intersection(nums2_set)
    
    # return common elements from both hashmaps and append to a set 
    return common_elements
nums1 = [4,9,5, 4]
nums2 = [9,4,9,8,4]

print(intersection(nums1,nums2))        