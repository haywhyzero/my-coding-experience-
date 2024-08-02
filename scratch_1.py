def main():

    print_square(5)


def print_square(size):
    dec = size
    for i in range(size+1):
        print(''.join(map(str, range(1, i+1))))



if __name__ == '__main__':
    main()