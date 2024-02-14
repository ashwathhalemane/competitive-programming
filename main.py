# You are given two integer arrays persons and times. In an election, the ith vote was cast for persons[i] at time times[i].
# Persons: [0, 1, 1, 0, 0, 1, 0] times =  [0, 5, 10, 15, 20, 25, 30]

# For each query at a time t, find the person that was leading the election at time t. Votes cast at time t will count towards our query. In the case of a tie, the most recent vote (among tied candidates) wins.
# [3], [12], [25], [15], [24], [8]
# Implement the TopVotedCandidate class:

#     TopVotedCandidate(int[] persons, int[] times) Initializes the object with the persons and times arrays.
#     int q(int t) Returns the number of the person that was leading the election at time t according to the mentioned rules.

# runtime error on append function at line number 29 
class TopVotedCandidate:
    
    def __init__(self, persons, times):
        self.persons = persons
        self.times = times
        # self.printThis(self, persons, times)
        print(self.persons)
        print(self.times)
    def q(self, t):
        # get time "t" -> find the range till which we must traverse in persons array
        range_value = int(t/5)
        # print("Range of T is ", str(t),range_value)
        # return range_value
        output_array = []
        # only we know till where to iterate, track number of zero's and one's
        for time_interval in range(range_value+1):
            # zeros = 0
            output_array.append(persons[time_interval])
        # print(output_array) 
        last_element = output_array[len(output_array)-1]
        
        for each_element_in_zero_one_array in output_array:
            zeroes = 0
            ones = 0
            
            
            if output_array[each_element_in_zero_one_array] == 0:
                zeroes+=1
            if output_array[each_element_in_zero_one_array] == 1:
                ones+=1
            
        if zeroes > ones:
            return 0
        elif ones > zeroes:
            return 1
        else:
            return last_element     
            # ones  = 0
            # last_so_far = persons[range_value]
            # if persons[time_interval] == 0:
            #     zeros+=1   
            # if persons[time_interval] == 1: 
            #     ones+=1
                   
        # if zero's is greater
            # zero wins
        # if one's is greater
            # one wins
        # if draw we need last element
        #   # store last element too... while iterating  
    # def range(self, t):
    #     return int(t/5)
# Your TopVotedCandidate object will be instantiated and called as such:
persons = [0, 1, 1, 0, 0, 1, 0]
times = [0, 5, 10, 15, 20, 25, 30]
obj = TopVotedCandidate(persons, times)

for time in [3, 12, 25, 15, 24, 8]:
    param_1 = obj.q(time)
    print(param_1)

