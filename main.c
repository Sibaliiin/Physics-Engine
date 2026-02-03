#include	<stdio.h>

#include	"raylib.h"

int main()
{
	printf("Hello, world!\n");

	InitWindow(600, 400, "Window");

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
