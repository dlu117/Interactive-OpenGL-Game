
#ifndef FLAPPER
#define FLAPPER

#include "../Engine/Graphics/Sprite.h"
#include "../Engine/Physics/Rigidbody.h"

class Flapper
{
public:

	Flapper();
	Flapper(Sprite _sprite);

	void Update();
	void Render();
	void Flap();

	Sprite& GetSprite();
	Rigidbody& GetRB();


private:
	Sprite sprite;
	Rigidbody rb;

};

#endif
