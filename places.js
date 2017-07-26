var Observable = require("FuseJS/Observable");

module.exports = Observable(
	{
		id: 0,
		name: 'Legend',
		country: 'The Abode of God',
		color: '#FCBC51',
		image: "Assets/omka.png",
		numbers: [
			{ title: 'Age', fact: 'unknown thousand years' }
				],
		facts: [
'Hindu scriptures says that once upon a time there was a great war between Devas and Danavas(demon), in which Danavas won. This was a major setback for Devas and hence Devas prayed to Lord Shiva. Pleased with their prayer, Lord Shiva emerged in the form of Omkareshwar Jyotirlinga and defeated Danavas.',
'Adi Shankaras Cave - Omkareshwar is said to be the place where Sri Adi Sankara met his Guru Govindapada in a cave. This cave can be found even today just below the Shiva temple where an image of Adi Shankara has been installed.'		]
	},{
		id:1,
		name: 'Transport',
		country: 'Getting there',
		color: '#49BFC1',
		image: "Assets/train.png",
		numbers: [
			{ title: 'Air', fact: 'Nearest Airport : Indore' },
			{ title: 'Train', fact: '4 trains at varying times'},
						{ title: 'Road', fact: 'Excellent connectivity'}

		],
		facts: [
			'Indore is the nearest airport and connected by regular flights from all over India.',
			'Train transportation is limited and can be affected by the guage conversion in progress',
			'Excellent connectivity from Indore for road transportation'
		]
	},{
		id: 2,
		name: 'Services',
		country: 'What is available',
		color: '#FCBC51',
		image: "Assets/service.png",
		numbers: [
			{ title: 'Hotels', fact: 'Narmada resort the best' },
			{ title: 'Clinics', fact: 'Local' },
			{ title: 'Restaurants', fact: 'Local chains'}
		],
		facts:  [
'Narmada resort is the best hotel to stay. Hotel Om Shiva and hotel Aashirvad are other notable mentions.',
			'Local clinics can assist with basic healthcare services.',
'Many local restuarants which serve a variety of quality local quisine. Dont expect five star service but its good enough.' 		]
	},{
		id: 3,
		name: 'Activities',
		country: 'Things to do',
		color: '#EC7145',
		image: "Assets/setagaya.png",
		numbers: [
			{ title: 'Parikrama', fact: '7 Km ' },
			{ title: 'Boat Ride', fact: 'Around the island' },
			{ title: 'Mamleshwar', fact: 'Darshan' }
		],
		facts:  [
'Parikrama path is aproximate 7KM and has several temples and ashrams on the way. It has lots of ups and downs and has river sangam on the way. Completing it is supposed to have a lot of spiritual value ',
'You can take a boat road to get to the island. Its a fun adventure but will need to be followed by a stair climb. If some of you have trouble with stairs, take the bridge.',
'Mamleshwar is a temple on the main body of land and has a very calm and peaceful energy to it. Definitely worth a visit'		]
	},{
		id: 4,
		name: 'Nearby',
		country: 'Closeby attractions',
		color: '#FCBC51',
		image: "Assets/map.png",
		numbers: [
			{ title: 'Maheshwar', fact: 'Holkar fortress' },
			{ title: 'Mandu', fact: 'Ancient city' },
			{ title: 'Mahakal', fact:'Another Jyotirlinga'}
		],
		facts: [
			'Maheshwar served as the capital of the great Maratha queen Rajmata Ahilya Devi Holkar. She embellished the city with many buildings and public works, and it is home to her palace, as well as numerous temples, a fort, and riverfront ghats (broad stone steps which step down to the river).',
			'Mandu or Mandavgad is a uninhabited ancient city in the present-day Mandav area of the Dhar district. It has beautiful forts, temples and a plethora of other beautiful works, centuries old',
			'One of the 12 Jyotirlingas in India, the lingam at the Mahakal is believed to be swayambhu (born of itself) deriving currents of power shakti) from within itself as against the other images and lingams which are ritually established and invested with mantra-shakti.'
		]
	}
);
 
