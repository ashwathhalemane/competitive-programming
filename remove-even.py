
#remove all the even entries in the list

def remove_even(lst):
    # Write your code here!
    new_tuple = ()
    new_list = list(new_tuple)

    for i in range(0, len(lst)):
        if(lst[i]%2!=0):
            new_list.append(lst[i])
    
    return new_list

print(remove_even([1,2,3,4,5,6]))
