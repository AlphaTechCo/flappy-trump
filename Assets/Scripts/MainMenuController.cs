using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

	public Text highScore;

	public void PlayButton() {
		SceneManager.LoadScene(1);

	}

	void HighScoreFunction() {
		highScore.text = PlayerPrefs.GetInt("HighScore").ToString();
	}

} // End Class
