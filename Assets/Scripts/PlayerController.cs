/************************************************************************
** Author: James Tuttle
** Date: 022/02/2017
** ----------------------------------
**
** Purpose: Player Controller
**
**************************************************************************/


using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
public class PlayerController : MonoBehaviour {

public float flapForce;
private Rigidbody2D rB; // Rigidbody2D
public bool isGameOver; 
public bool isStart;
public int playerScore;
public GameObject gameOverPanel;
public Text highScore;
public Text score;
public Text scoreText;



	// Use this for initialization
	void Start () {
		rB = GetComponent<Rigidbody2D>();

	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetButtonDown("Fire1") && !isGameOver) {
			if(!isStart) {
				isStart = true;
				rB.gravityScale = 1;
			}
			Flap();
		}
	}

	void FixedUpdate() {
		if(isStart && !isGameOver) {
			HeavyEnd();
		}
	}

	void Flap() {
		rB.velocity = Vector2.zero;
		rB.AddForce(new Vector2(0, flapForce));
	}

	void OnTriggerEnter2D(Collider2D other) {
		if(other.tag == "DeathZone") {
			isGameOver = true;
			StartCoroutine(waitForGameOver());
		}
		if(other.tag == "ScoreZone") {
			playerScore++;
			// >>>> SCORE INCREMENTS - ADD HIGHSCORE UI UPDATE <<<<<
			// int temp = PlayerPrefs.GetInt("HighScore");
			// if(score > temp) { // <-- error one comparing text to int I DID NOT SEE THAT
			// 				   //          ISSUE ON THE SNAKE VIDEO ????????
			// 	PlayerPrefs.SetInt("HighScore", score);
			// }
		}
	}




	void OnCollisionEnter2D(Collision2D other) {
		if(other.transform.tag == "DeathZone") {
			isGameOver = true;
			StartCoroutine(waitForGameOver());
		}
	}

IEnumerator waitForGameOver() {
	yield return new WaitForSeconds(1);
	gameOverPanel.SetActive(true);
	Time.timeScale = 0;
}

void HeavyEnd() {
	float angle = 30;
	if (rB.velocity.y < 0) {
		angle = Mathf.Lerp(35, -90, -(rB.velocity.y) / 10);
	}
	transform.rotation = Quaternion.Euler(0,0,angle);
}


} // End Class
