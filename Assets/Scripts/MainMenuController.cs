/************************************************************************
** Author: James Tuttle
** Date: 02/01/2017
** ----------------------------------
**
** Purpose: Main menu controller
**
**************************************************************************/


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

public Text highScore;

	void Start() {
		HighScoreFunction();
	}

	public void PlayButton() {
		SceneManager.LoadScene(1);

	}
// >>>>> TRYING TO ADD THE HIGH SCORE TO MAINMENU <<<<<
void HighScoreFunction() {
	highScore.text = PlayerPrefs.GetInt("HighScore").ToString();
}

} // End Class
