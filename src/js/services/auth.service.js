import axios from '../plugins/axios';
// import API_ENV from '../config/api.config';

/**
 * Funxtion login. Make login request to API
 * @param {String} email
 * @param {String} password
 */
export async function login(email, password) {
	try {
		const response = await axios.post(`/auth/login`, JSON.stringify({ email, password }));

		console.log(response);
		return response.data;
	} catch (err) {
		console.log(err);
		return Promise.reject(err);
	}
}
