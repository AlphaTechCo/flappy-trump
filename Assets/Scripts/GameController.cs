/************************************************************************
** Author: James Tuttle
** Date: 02/01/2017
** ----------------------------------
**
** Purpose: Game controller
**
**************************************************************************/


using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class GameController : MonoBehaviour {

	public GameObject pipePrefab;
	public Transform pipeSpawn;
	public float minTime;
	public float maxTime;
	public float timer;
	public PlayerController PC;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(timer <= 0f  && PC.isStart == true ) {
			PipeSpwaner();
			//timer = Random.Range (minTime, maxTime);
		}
		timer -= Time.deltaTime;
	}

	void PipeSpwaner() {
		Instantiate(pipePrefab, pipeSpawn.position, pipeSpawn.rotation);
		timer = Random.Range(minTime, maxTime);
	}

	public void ReplyFunction() {
		Time.timeScale = 1;
		SceneManager.LoadScene(1);
	}

	public void MainMenuButton() {
		Time.timeScale = 1;
		SceneManager.LoadScene(0);
	}


} // End class 
 
