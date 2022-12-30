# include <Siv3D.hpp>
using namespace s3d;

void Main()
{	
	
	while (System::Update())
	{
		Circle{Cursor::Pos().x, Cursor::Pos().y, 30}.draw();
	}
}
