
import axios from 'axios';

const API_KEY = '8836d045e5ea09ce5af4c46e8207aa3e';
const BASE_URL = 'https://api.themoviedb.org/3/';
const withBaseUrl = path => `${BASE_URL}${path}?api_key=${API_KEY}`;

export class MoviesService {

  static getMovies() {
    return axios(withBaseUrl("/movie/popular"));
  }

  static getMovieById(id) {
    return axios(withBaseUrl(`movie/${id}`));
  }

}