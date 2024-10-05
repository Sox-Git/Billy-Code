package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class MenuState extends FlxState
{
	override public function create()
	{
		super.create();
		var TestBG1 = new FlxSprite('images/Menu/Main/bg');
		TestBG1.screenCenter();
		add(TestBG1);

		FlxG.music.play('BB1/TitleTheme');
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
