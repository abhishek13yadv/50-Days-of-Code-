if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    list1 = list(set(arr))
    list1.sort()
    print(list1[len(list1)-2])
