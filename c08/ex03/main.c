#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42; //*	(*point).x = 42;	aynı şey
	point->y = 21;
}

int main(void)
{
	t_point point; //* t_point = struct s_point
	set_point(&point);
	return (0);
}
