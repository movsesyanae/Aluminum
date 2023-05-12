def func times_two(int x) -> int {
    print_int(x);
    return x * 2;
}

def func main() {
    take int two_times_3 = times_two(3);
    print_int(two_times_3);
}