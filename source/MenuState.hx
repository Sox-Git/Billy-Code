package;

import flixel.FlxSprite;
import flixel.FlxState;

class PlayState extends FlxState
{
	override public function create()
	{
		super.create();
		var TestBG1 = new FlxSprite('images/Menu/Main/bg');

		TestBG1.screenCenter();
		add(TestBG1);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
