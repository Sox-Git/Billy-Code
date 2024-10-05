package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class MenuState extends FlxState
{
	override public function create()
	{
		super.create();
		var BG = new FlxSprite();
		BG.loadGraphic("assets/images/Menu/Main/bg.png");
		add(BG);

		var BB1 = new FlxSprite();
		BB1.loadGraphic("assets/images/Menu/Main/bb1.png");
		add(BB1);
		BB1.y = 100;
		BB1.x = 50;

		var bb2 = new FlxSprite();
		bb2.loadGraphic("assets/images/Menu/Main/bb2.png");
		add(bb2);
		bb2.y = 100;
		bb2.x = 350;

		var bb3 = new FlxSprite();
		bb3.loadGraphic("assets/images/Menu/Main/bb3.png");
		add(bb3);
		bb3.y = 100;
		bb3.x = 650;

		FlxG.sound.playMusic(AssetPaths.TitleTheme1__ogg, 1, true);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
