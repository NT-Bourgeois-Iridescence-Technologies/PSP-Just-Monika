#pragma once
#include <Graphics/2D/SpriteBase.h>
#include <map>

using namespace Stardust;
using namespace Stardust::Graphics;
using namespace Stardust::Graphics::Render2D;

namespace Monika {
	class Body {
	public:

		Body();

		void draw();
		void update();

		std::string currentEyes;
		std::string currentEyebrows;
		std::string currentMouth;

	private:
		std::map<std::string, Sprite*> sprts;
		std::map<std::string, Sprite*> eyes;
		std::map<std::string, Sprite*> eyebrows;
		std::map<std::string, Sprite*> mouths;

		int filter;
		std::vector<std::vector<std::string>> filters;

		Sprite* hairF, * hairB, * leanHairF, * leanHairB;
	};
}