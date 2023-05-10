def func main() {

    take int x;

    take float y = 3.0;
    if(x ~= 2){
        set x = 4;
    } else if (y >= 3.0) {

    }
    else {
        if(false) {
            set x = 6;
        }
        set x = 5;
    }
    set x = x - 3;

    take int z;
    set z = 3 * x  + 4 / 2 + x * 2;
}