def subset(arr, target, ans=[]):

    if target == 0:
        print(ans)
        return True

    if len(arr) == 0 or target < 0:
        return False

    return (
		subset(arr[1:], target - arr[0], ans + [arr[0]])
        or 
        subset(arr[1:], target, ans)
    )

arr = [1, 2, 5, 6, 8]
target = 9

if not subset(arr, target):
    print("No subset found")
