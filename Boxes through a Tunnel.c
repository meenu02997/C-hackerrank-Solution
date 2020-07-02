

typedef struct box
{
    int length;
    int height;
    int width;
}box;
int get_volume(box b) {
    return b.height * b.width * b.length;
}

int is_lower_than_max_height(box b) {
    return b.height <41;
}

