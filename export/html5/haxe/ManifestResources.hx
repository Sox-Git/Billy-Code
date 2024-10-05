package;

import haxe.io.Bytes;
import haxe.io.Path;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || webassembly)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif (console || sys)
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		data = '{"name":null,"assets":"aoy4:pathy70:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fbilly%20dead%20text.pngy4:sizei1295y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y60:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fbillyidle.pngR2i1918R3R4R5R7R6tgoR0y64:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2FbillywalkLEFT.pngR2i2098R3R4R5R8R6tgoR0y65:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2FbillywalkRIGHT.pngR2i2101R3R4R5R9R6tgoR0y62:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fchromosome1.pngR2i900R3R4R5R10R6tgoR0y62:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fchromosome2.pngR2i1236R3R4R5R11R6tgoR0y62:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fchromosome3.pngR2i1215R3R4R5R12R6tgoR0y63:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fdont%20touch.pngR2i1407R3R4R5R13R6tgoR0y55:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fhand.pngR2i230186R3R4R5R14R6tgoR0y61:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fred%20zone.pngR2i112R3R4R5R15R6tgoR0y57:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fstage1.pngR2i25827R3R4R5R16R6tgoR0y57:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fstage2.pngR2i21989R3R4R5R17R6tgoR0y57:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fstage3.pngR2i26300R3R4R5R18R6tgoR0y77:assets%2Fimages%2FGame%2FBilly-Boy-1%2Flevel%2Fthis%20is%20a%20chromosome.pngR2i1890R3R4R5R19R6tgoR0y56:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fcopy.pngR2i1249R3R4R5R20R6tgoR0y57:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fcreds.pngR2i57034R3R4R5R21R6tgoR0y56:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fmenu.pngR2i26659R3R4R5R22R6tgoR0y68:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fshameless%20plug.pngR2i11395R3R4R5R23R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2F0953a267ffa2fbf83f4a6cf63bdd2243.pngR2i2100R3R4R5R24R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2F09f2bd11be50f47610c4ef648f9e8cb8.pngR2i322R3R4R5R25R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2F13dbc50eb30261d8b61218e4df0463ff.pngR2i2691R3R4R5R26R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2F818066c3d6958520f3f7d35201237d82.pngR2i1789R3R4R5R27R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2Fa3932218fd2160bf357a7fe1e06621d2.pngR2i2616R3R4R5R28R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2Fe3e66ddc9817357eb2b64cc7ea0c8db6.pngR2i1598R3R4R5R29R6tgoR0y100:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fsong%20titles%2Fe7463e36d366f2c02a23aeb5948bb95c.pngR2i2429R3R4R5R30R6tgoR0y57:assets%2Fimages%2FGame%2FBilly-Boy-1%2Fsecret%2Fthank.pngR2i5461R3R4R5R31R6tgoR0y64:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftitle%2Fbilly%20title.pngR2i3193R3R4R5R32R6tgoR0y64:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftitle%2Fpress%20space.pngR2i14762R3R4R5R33R6tgoR0y57:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftitle%2Fsecret.pngR2i1473R3R4R5R34R6tgoR0y55:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftutorial%2F1.pngR2i38069R3R4R5R35R6tgoR0y55:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftutorial%2F2.pngR2i30875R3R4R5R36R6tgoR0y67:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftutorial%2Fbilly%20story.pngR2i3494R3R4R5R37R6tgoR0y59:assets%2Fimages%2FGame%2FBilly-Boy-1%2Ftutorial%2Fstory.pngR2i5746R3R4R5R38R6tgoR0y37:assets%2Fimages%2FGlobal%2Fcursor.pngR2i1934R3R4R5R39R6tgoR0y39:assets%2Fimages%2FMenu%2FMain%2Fbb1.pngR2i11099R3R4R5R40R6tgoR0y39:assets%2Fimages%2FMenu%2FMain%2Fbb2.pngR2i13547R3R4R5R41R6tgoR0y39:assets%2Fimages%2FMenu%2FMain%2Fbb3.pngR2i12841R3R4R5R42R6tgoR0y38:assets%2Fimages%2FMenu%2FMain%2Fbg.pngR2i30581R3R4R5R43R6tgoR2i3007836R3y5:SOUNDR5y38:assets%2Fmusic%2FBB1%2Fchromosomes.wavy9:pathGroupaR45hR6tgoR2i8728326R3R44R5y42:assets%2Fmusic%2FBB1%2Fdetroit%20clean.wavR46aR47hR6tgoR2i3928860R3y5:MUSICR5y57:assets%2Fmusic%2FBB1%2FDetroit%20theme%20%28secret%29.mp3R46aR49hR6tgoR2i119740R3R44R5y70:assets%2Fmusic%2FBB1%2FGrandma%20hit%20the%20Stairs%20%28unused%29.wavR46aR50hR6tgoR2i2860934R3R44R5y39:assets%2Fmusic%2FBB1%2FMain%20theme.wavR46aR51hR6tgoR2i3175278R3R44R5y60:assets%2Fmusic%2FBB1%2FTheme%20of%20my%20dead%20goldfish.wavR46aR52hR6tgoR2i187706R3R48R5y33:assets%2Fsounds%2FBB1%2Fdeath.mp3R46aR53hR6tgoR2i133984R3R44R5y32:assets%2Fsounds%2FBB1%2Ffart.wavR46aR54hR6tgoR2i560R3R44R5y31:assets%2Fsounds%2FBB1%2Fpop.wavR46aR55hR6tgoR2i8220R3R48R5y26:flixel%2Fsounds%2Fbeep.mp3R46aR56y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R48R5y28:flixel%2Fsounds%2Fflixel.mp3R46aR58y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i6840R3R44R5R57R46aR56R57hgoR2i33629R3R44R5R59R46aR58R59hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R60R61y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i277R3R4R5R66R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i505R3R4R5R67R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

	}


}

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billy_dead_text_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billyidle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billywalkleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billywalkright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_chromosome1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_chromosome2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_chromosome3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_dont_touch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_hand_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_red_zone_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_stage1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_stage2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_stage3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_this_is_a_chromosome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_copy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_creds_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_menu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_shameless_plug_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_0953a267ffa2fbf83f4a6cf63bdd2243_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_09f2bd11be50f47610c4ef648f9e8cb8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_13dbc50eb30261d8b61218e4df0463ff_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_818066c3d6958520f3f7d35201237d82_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_a3932218fd2160bf357a7fe1e06621d2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_e3e66ddc9817357eb2b64cc7ea0c8db6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_e7463e36d366f2c02a23aeb5948bb95c_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_thank_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_title_billy_title_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_title_press_space_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_title_secret_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_billy_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_global_cursor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bb1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bb2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bb3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bb1_chromosomes_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bb1_detroit_clean_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bb1_detroit_theme__secret__mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bb1_grandma_hit_the_stairs__unused__wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bb1_main_theme_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bb1_theme_of_my_dead_goldfish_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_bb1_death_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_bb1_fart_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_bb1_pop_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:image("assets/images/Game/Billy-Boy-1/level/billy dead text.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billy_dead_text_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/billyidle.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billyidle_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/billywalkLEFT.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billywalkleft_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/billywalkRIGHT.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_billywalkright_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/chromosome1.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_chromosome1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/chromosome2.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_chromosome2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/chromosome3.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_chromosome3_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/dont touch.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_dont_touch_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/hand.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_hand_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/red zone.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_red_zone_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/stage1.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_stage1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/stage2.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_stage2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/stage3.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_stage3_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/level/this is a chromosome.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_level_this_is_a_chromosome_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/copy.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_copy_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/creds.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_creds_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/menu.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_menu_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/shameless plug.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_shameless_plug_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/0953a267ffa2fbf83f4a6cf63bdd2243.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_0953a267ffa2fbf83f4a6cf63bdd2243_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/09f2bd11be50f47610c4ef648f9e8cb8.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_09f2bd11be50f47610c4ef648f9e8cb8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/13dbc50eb30261d8b61218e4df0463ff.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_13dbc50eb30261d8b61218e4df0463ff_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/818066c3d6958520f3f7d35201237d82.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_818066c3d6958520f3f7d35201237d82_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/a3932218fd2160bf357a7fe1e06621d2.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_a3932218fd2160bf357a7fe1e06621d2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/e3e66ddc9817357eb2b64cc7ea0c8db6.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_e3e66ddc9817357eb2b64cc7ea0c8db6_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/song titles/e7463e36d366f2c02a23aeb5948bb95c.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_song_titles_e7463e36d366f2c02a23aeb5948bb95c_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/secret/thank.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_secret_thank_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/title/billy title.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_title_billy_title_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/title/press space.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_title_press_space_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/title/secret.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_title_secret_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/tutorial/1.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/tutorial/2.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/tutorial/billy story.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_billy_story_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Game/Billy-Boy-1/tutorial/story.png") @:noCompletion #if display private #end class __ASSET__assets_images_game_billy_boy_1_tutorial_story_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Global/cursor.png") @:noCompletion #if display private #end class __ASSET__assets_images_global_cursor_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Menu/Main/bb1.png") @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bb1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Menu/Main/bb2.png") @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bb2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Menu/Main/bb3.png") @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bb3_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Menu/Main/bg.png") @:noCompletion #if display private #end class __ASSET__assets_images_menu_main_bg_png extends lime.graphics.Image {}
@:keep @:file("assets/music/BB1/chromosomes.wav") @:noCompletion #if display private #end class __ASSET__assets_music_bb1_chromosomes_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/BB1/detroit clean.wav") @:noCompletion #if display private #end class __ASSET__assets_music_bb1_detroit_clean_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/BB1/Detroit theme (secret).mp3") @:noCompletion #if display private #end class __ASSET__assets_music_bb1_detroit_theme__secret__mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/BB1/Grandma hit the Stairs (unused).wav") @:noCompletion #if display private #end class __ASSET__assets_music_bb1_grandma_hit_the_stairs__unused__wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/BB1/Main theme.wav") @:noCompletion #if display private #end class __ASSET__assets_music_bb1_main_theme_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/BB1/Theme of my dead goldfish.wav") @:noCompletion #if display private #end class __ASSET__assets_music_bb1_theme_of_my_dead_goldfish_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/BB1/death.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_bb1_death_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/BB1/fart.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_bb1_fart_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/BB1/pop.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_bb1_pop_wav extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end