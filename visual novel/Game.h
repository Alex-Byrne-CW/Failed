/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();

	void counterText();
	void HakimeText();
	void akari();
	void akariText();
	void movement(); 

	
	void setupFontAndText();
	void setupSprite();


	int counter = 0;

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message

	sf::Text m_akiraName; // text used for message on screen
	sf::Text m_AkiraTalk;

	sf::Text m_HajimeName;
	sf::Text m_HajimeText;

	sf::Texture m_backGround1Texture; 
	sf::Sprite m_backGround1Sprite; 

	sf::Texture m_loadingTexture;
	sf::Sprite m_loadingSprite;

	sf::Texture m_textBoxTexture;
	sf::Sprite m_textBoxSprite;

	sf::Texture m_AkariTexture;
	sf::Texture m_AkariTextureSerious;
	sf::Texture m_AkariTextureHappy;
	sf::Sprite m_AkariSprite;

	sf::Vector2f m_AkariLocation = { 0.0f, -250.0f }; 
	sf::Vector2f m_AkariVilocity = { 0.0f, 0.0f }; 

	bool m_exitGame; // control exiting game

	sf::Color colour{ 255u , 255u, 255u, 155u };  
	sf::Color Default{ 255u , 255u, 255u, 255u };
	sf::Vector2f Speed = { -5.0f , 0.0f }; 
};

#endif // !GAME_HPP

